// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.44%
// test_accuracy: 79.46%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_23.txt', 'act2\\trial_28.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 15:53:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.169571, 1.169617,
    -0.429388, 0.429393,
    1.181841, -1.181860,
    0.966289, -0.966311,
    2.220386, -2.220330,
    -2.972533, 2.972453,
    0.214561, -0.214569,
    -0.015149, 0.015181,
    1.040852, -1.040719,
    -0.186217, 0.185923,
    -0.581802, 0.581870,
    0.482764, -0.482651,
};

float Cg_init[2] = {
    -1.098704, -1.098685
};

float xstd_init[12] = {
    0.003843, 0.001450, 0.104916, 0.177998, 0.001851, 0.000586, 0.034336, 0.095904, 0.000515, 0.000082, 0.015456, 0.056718
};

float xmean_init[12] = {
    0.009803, -0.006199, 0.171111, 0.582063, 0.003379, -0.007674, 0.009630, 0.059048, 0.003152, -0.007807, 0.004656, 0.066349
};

