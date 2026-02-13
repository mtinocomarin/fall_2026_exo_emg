// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.49%
// test_accuracy: 66.07%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 12:44:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.736469, 0.736481,
    0.182483, -0.182484,
    0.457195, -0.457233,
    0.693289, -0.693264,
    -0.292021, 0.292018,
    0.112101, -0.112097,
    -0.061235, 0.061237,
    -0.163417, 0.163405,
    0.241259, -0.241233,
    -0.064325, 0.064357,
    -0.622674, 0.622665,
    0.013560, -0.013606,
};

float Cg_init[2] = {
    -0.327184, -0.327185
};

float xstd_init[12] = {
    0.004056, 0.001754, 0.151992, 0.205374, 0.001104, 0.000190, 0.029074, 0.081968, 0.000672, 0.000170, 0.031382, 0.108035
};

float xmean_init[12] = {
    0.010301, -0.005725, 0.249784, 0.692857, 0.003401, -0.007761, 0.009177, 0.077468, 0.003539, -0.007727, 0.013896, 0.122663
};

