// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.85%
// test_accuracy: 78.57%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_36.txt']}
// generated: 2025-12-12 16:06:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.480944, 0.480954,
    -0.531140, 0.531138,
    0.412358, -0.412378,
    0.687079, -0.687072,
    1.089676, -1.089523,
    -0.919723, 0.919512,
    -0.270737, 0.270787,
    -0.153849, 0.153856,
    0.762562, -0.762601,
    -0.035045, 0.035126,
    -0.381187, 0.381163,
    -0.081163, 0.081116,
};

float Cg_init[2] = {
    -0.493442, -0.493431
};

float xstd_init[12] = {
    0.003549, 0.001232, 0.102407, 0.167955, 0.001291, 0.000399, 0.021017, 0.069548, 0.000531, 0.000075, 0.015391, 0.064855
};

float xmean_init[12] = {
    0.009603, -0.006329, 0.171288, 0.580000, 0.003087, -0.007753, 0.005573, 0.047778, 0.003110, -0.007812, 0.004056, 0.067725
};

