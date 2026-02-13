// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 92.86%
// test_accuracy: 80.36%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt', 'act2\\trial_28.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-12 16:09:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.056064, 1.056109,
    -0.284182, 0.284178,
    0.833958, -0.833993,
    0.926608, -0.926607,
    1.761701, -1.761650,
    -2.200221, 2.200123,
    0.030374, -0.030363,
    -0.177756, 0.177788,
    1.138574, -1.138465,
    -0.067133, 0.066885,
    -0.503992, 0.504051,
    0.139366, -0.139276,
};

float Cg_init[2] = {
    -0.951506, -0.951494
};

float xstd_init[12] = {
    0.003652, 0.001245, 0.098843, 0.168733, 0.001762, 0.000549, 0.027517, 0.086225, 0.000533, 0.000079, 0.014798, 0.060732
};

float xmean_init[12] = {
    0.009813, -0.006265, 0.164589, 0.580909, 0.003416, -0.007663, 0.009004, 0.058442, 0.003151, -0.007808, 0.004675, 0.067662
};

