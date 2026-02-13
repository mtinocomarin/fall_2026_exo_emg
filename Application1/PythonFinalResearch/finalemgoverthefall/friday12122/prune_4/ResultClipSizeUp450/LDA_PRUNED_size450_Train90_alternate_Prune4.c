// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.47%
// test_accuracy: 75.00%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-12 16:04:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.798667, 0.798699,
    -0.177502, 0.177533,
    0.441121, -0.441162,
    0.778055, -0.778059,
    0.846659, -0.846772,
    -0.981686, 0.981821,
    -0.016982, 0.016962,
    -0.023328, 0.023322,
    -0.387146, 0.387253,
    0.437599, -0.437839,
    -0.429540, 0.429620,
    0.161091, -0.160986,
};

float Cg_init[2] = {
    -0.363492, -0.363527
};

float xstd_init[12] = {
    0.003677, 0.001363, 0.099874, 0.168190, 0.001623, 0.000498, 0.029059, 0.080459, 0.001380, 0.000087, 0.017266, 0.066016
};

float xmean_init[12] = {
    0.009804, -0.006266, 0.168594, 0.577812, 0.003220, -0.007716, 0.007656, 0.049922, 0.003225, -0.007808, 0.004531, 0.066641
};

