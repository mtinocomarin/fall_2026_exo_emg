// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.12%
// test_accuracy: 78.12%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_10.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 15:52:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.067009, 2.066978,
    0.743030, -0.743008,
    0.870678, -0.870681,
    1.019103, -1.019082,
    2.055676, -2.055815,
    -0.842664, 0.842894,
    -0.848150, 0.848069,
    -0.728864, 0.728852,
    0.972921, -0.972953,
    -1.125454, 1.125539,
    -0.329526, 0.329500,
    0.761588, -0.761611,
};

float Cg_init[2] = {
    -0.933309, -0.933326
};

float xstd_init[12] = {
    0.003992, 0.001469, 0.101292, 0.172353, 0.001836, 0.000578, 0.038532, 0.098701, 0.000570, 0.000103, 0.022341, 0.067946
};

float xmean_init[12] = {
    0.010186, -0.006108, 0.177500, 0.579750, 0.003333, -0.007687, 0.010333, 0.053750, 0.003157, -0.007801, 0.005333, 0.068500
};

